#include <iostream>

using namespace std;

class CarroBuilder{
    protected:
        string Resultado;
    public:
        virtual void addPuerta() = 0;
        virtual void addLlanta() = 0;
        virtual void addTimon() = 0;
        virtual void addAsiento() = 0;
        virtual void addMotor() = 0;
        virtual void addEspejo() = 0;
        virtual void addVidrio() = 0;

        virtual void addColor(string color) = 0;
        string getResultado(){
            return Resultado;
        }
};

class Carro : public CarroBuilder{
    public:
        void addPuerta() override{
            Resultado += "Una puerta ";
        }   
        void addLlanta() override{
            Resultado += "Una llanta ";
        }
        void addTimon() override{
            Resultado += "Un timon ";
        }
        void addAsiento() override{
            Resultado += "Un asiento ";
        }
        void addMotor() override{
            Resultado += "Un motor ";
        }
        void addEspejo() override{
            Resultado += "Un espejo ";
        }
        void addVidrio() override{
            Resultado += "Un vidrio ";
        }
        void addColor(string color) override{
            Resultado += "de color " + color + ".\n";
        }
};


class Director{
    CarroBuilder *carro;
    public:
        Director(CarroBuilder *carro) : carro(carro){}
        void crear(){
            char opc;
            string col;
            cout<<"Desea una puerta (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addPuerta();
                    cout<<"Que color desea para la puerta: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea una llanta (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addLlanta();
                    cout<<"Que color desea para la llanta: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea una timon (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addTimon();
                    cout<<"Que color desea para el timon: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea un asiento (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addAsiento();
                    cout<<"Que color desea para el asiento: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea un motor (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addMotor();
                    cout<<"Que color desea para el motor: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea un espejo (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addEspejo();
                    cout<<"Que color desea para el espejo: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Desea un vidrio (y/n): ";
            cin>>opc;
                if (opc=='y'){
                    carro->addVidrio();
                    cout<<"Que color desea para el vidrio: ";
                    cin>>col;
                    carro->addColor(col);
                }

            cout<<"Usted tiene: "<<endl;
        }
};

int main(){
    Carro Mi_Carro;

    Director dire(&Mi_Carro);
    dire.crear();

    cout<<Mi_Carro.getResultado();

    return 0;
}