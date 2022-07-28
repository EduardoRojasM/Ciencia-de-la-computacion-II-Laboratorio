#include <iostream>

using namespace std;

class WinFactory
{
public:
    virtual string Draw() const = 0;
};

class WinButton : public WinFactory
{
public:
    string Draw() const override{
        return "Button Windows";
    }
};

class WinCheckBox : public WinFactory
{
public:
    string Draw() const override{
        return "CheckBox Windows";
    }
};

class MacFactory
{
public:
    virtual string Draw() const = 0;
    virtual string draw(const WinFactory& colaborador) const = 0;
};

class MacButton : public MacFactory
{
public:
    string Draw() const override{
        return "Button Mac";
    }
    string draw(const WinFactory& colaborador) const override{
        const string result = colaborador.Draw();
        return result;
    }
};

class MacCheckBox : public MacFactory
{
public:
    string Draw() const override{
        return "CheckBox Mac";
    }
    string draw(const WinFactory& colaborador) const override{
        const string result = colaborador.Draw();
        return result;
    }
};

class GUIFactory
{
public:
    virtual WinFactory *crearControlW() const = 0;
    virtual MacFactory *crearControlM() const = 0;
};

class Button : public GUIFactory
{
public:
    WinFactory *crearControlW() const override{
        return new WinButton();
    }
    MacFactory *crearControlM() const override{
        return new MacButton();
    }
};

class CheckBox : public GUIFactory
{
public:
    WinFactory *crearControlW() const override{
        return new WinCheckBox();
    }
    MacFactory *crearControlM() const override{
        return new MacCheckBox();
    }
};

void Aplication(const GUIFactory &f, int os){
    if (os==1){
        const WinFactory *producto_a = f.crearControlW();
        cout<<"\nDibujando "<<producto_a->Draw()<<endl;
        delete producto_a;
    }
    if (os==2){
        const MacFactory *producto_b = f.crearControlM();
        cout<<"\nDibujando "<<producto_b->Draw()<<endl;
        delete producto_b;
    }

    //Mac puede dibujar Buttons y CheckBox de Windows
    if(os==3){
        const WinFactory *producto_a = f.crearControlW();
        const MacFactory *producto_b = f.crearControlM();
        cout<<"\nDibujando "<<producto_b->draw(*producto_a)<<endl;
    }
} 

int main(){

    //1 para Windows
    cout<<"Cliente: Windows ";
    Button *f1 = new Button();
    Aplication(*f1,1);
    delete f1;
    cout<<endl;

    //2 para Mac
    cout<<"Cliente: Mac ";
    Button *f2 = new Button();
    Aplication(*f2,2);
    delete f2;
    cout<<endl;

    return 0;
}