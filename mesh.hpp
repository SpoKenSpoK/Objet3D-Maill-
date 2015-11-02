#ifndef MESH_HPP
#define MESH_HPP

/** La classe Mesh représente l'objet maillé 3D.
    Ce dernier contient un certain nombre de points ainsi que de faces. \n
    Nous utilisons donc ici les types \b unsigned \b int pour les attributs. */

class Mesh{
    private:
        unsigned int numberof_point;   /**< Nombre total de points dans l'objet maillé */
        unsigned int numberof_face;    /**< Nombre total de faces dans l'objet maillé */

    public:
    /// Constructeur
    /** Constructeur prennant en paramètre le nombre de Point et de Face présents dans l'objet maillé
        \param p un entier positif
        \param f un entier positif */
        Mesh(unsigned int p, unsigned int f);
    /// Destructeur
        ~Mesh();

    /// Accesseur du nombre de points
    /** Retourne la valeur du nombres de points \return numberof_point un entier positif */
        unsigned int getNumberof_p() const;

    /// Accesseur du nombre de faces
    /** Retourne la valeur du nombre de faces \return numberof_face un entier positif */
        unsigned int getNumberof_f() const;

    /// Mutateur du nombre de points
    /** Modifie la valeur du nombre de points \param p un entier positif constant passé par référence */
        void setNumberof_p(const unsigned int& p);

    /// Mutateur du nombre de faces
    /** Modifie la valeur du nombre de faces \param f un entier positif constant passé par référence */
        void setNumberof_f(const unsigned int& f);
};

#endif // MESH_HPP
