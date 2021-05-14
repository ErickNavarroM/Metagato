#ifndef UTILERIA_H_INCLUDED
#define UTILERIA_H_INCLUDED

//****************************************************************************************

/**
 * \brief Mueve el cursor en la ventana de despliegue a la posici�n indicada
 *
 * \details Las posiciones de la ventana de despliegue inician con (0,0) en la
 * esquina superior izquierda. Podr�a decirse que la posici�n \b x indica la
 * columna de la ventana y la posici�n \b y indica el rengl�n, ambas iniciando
 * en cero.
 *
 * \param x Posici�n horizontal a donde se mover� el cursor. El cursor se
 *          mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posici�n vertical a donde se mover� el cursor. El cursor se mueve
 *          \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return Nada
 *
 * \warning Si alguna posici�n se sale de los l�mites de la ventana de
 *          despliegue, el cursor no se mover�.
 */
void MoverCursor(short x, short y);

//****************************************************************************************
/** \brief Estado del cursor
 */
enum EstadoCursor{
    APAGADO,    /**< Apaga el cursor. Lo hace invisible */
    ENCENDIDO   /**< Enciende el cursor. Lo hace visible */
};

/** \brief Modo o tama�o del cursor
 */
enum ModoCursor{
    NORMAL = 20,    /**< El cursor tiene un tama�o peque�o, tama�o normal */
    MEDIO = 50,     /**< El cursor tiene un tama�o medio, m�s alto del normal, ocupa la mitad del �rea de un car�cter en la ventana */
    SOLIDO = 80     /**< El cursor tiene el tama�o de todo el �rea de un car�cter en la ventana */
};

/** \brief Cambia el estado y el tama�o del cursor
 *
 * \param estado El estado a establecer. Los posibles valores son ENCENDIDO o APAGADO
 * \param modo El tama�o o modo del cursor a establecer. Los posibles valores son MINI, NORMAL y SOLIDO
 *
 * \return Nada
 */
void CambiarCursor(EstadoCursor estado, ModoCursor modo);

//****************************************************************************************

void EstablecerVentana(int ancho, int alto);

//****************************************************************************************

#endif // UTILERIA_H_INCLUDED
