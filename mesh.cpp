#include "mesh.hpp"

//Constructeur
Mesh::Mesh(unsigned int point, unsigned int face)
    :numberof_point(point), numberof_face(face)
{}

//Destructeur
Mesh::~Mesh() {}

//Getters
unsigned int Mesh::getNumberof_p() const { return numberof_point; }
unsigned int Mesh::getNumberof_f() const { return numberof_face; }

//Setters
void Mesh::setNumberof_p(const unsigned int& point) { numberof_point = point; }
void Mesh::setNumberof_f(const unsigned int& face) { numberof_face = face; }



