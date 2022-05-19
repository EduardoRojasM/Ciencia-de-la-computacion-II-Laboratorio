#include "Material.h"

Material::Material(string _material)
{
    material = _material;
}

Material::~Material()
{
}

void Material::mostrarMaterial(){
    cout<<material;
}
