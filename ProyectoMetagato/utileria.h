#ifndef UTILERIA_H_INCLUDED
#define UTILERIA_H_INCLUDED

//****************************************************************************************

/**
 * \brief Mueve el cursor en la ventana de despliegue a la posición indicada
 *
 * \details Las posiciones de la ventana de despliegue inician con (0,0) en la
 * esquina superior izquierda. Podría decirse que la posición \b x indica la
 * columna de la ventana y la posición \b y indica el renglón, ambas iniciando
 * en cero.
 *
 * \param x Posición horizontal a donde se moverá el cursor. El cursor se
 *          mueve \b x unidades a la derecha a partir del inicio de la ventana.
 * \param y Posición vertical a donde se moverá el cursor. El cursor se mueve
 *          \b y unidades hacia abajo a partir del inicio de la ventana.
 *
 * \return Nada
 *
 * \warning Si alguna posición se sale de los límites de la ventana de
 *          despliegue, el cursor no se moverá.
 */
void MoverCursor(short x, short y);

//****************************************************************************************
/** \brief Estado del cursor
 */
enum EstadoCursor{
    APAGADO,    /**< Apaga el cursor. Lo hace invisible */
    ENCENDIDO   /**< Enciende el cursor. Lo hace visible */
};

/** \brief Modo o tamaño del cursor
 */
enum ModoCursor{
    NORMAL = 20,    /**< El cursor tiene un tamaño pequeño, tamaño normal */
    MEDIO = 50,     /**< El cursor tiene un tamaño medio, más alto del normal, ocupa la mitad del área de un carácter en la ventana */
    SOLIDO = 80     /**< El cursor tiene el tamaño de todo el área de un carácter en la ventana */
};

/** \brief Cambia el estado y el tamaño del cursor
 *
 * \param estado El estado a establecer. Los posibles valores son ENCENDIDO o APAGADO
 * \param modo El tamaño o modo del cursor a establecer. Los posibles valores son MINI, NORMAL y SOLIDO
 *
 * \return Nada
 */
void CambiarCursor(EstadoCursor estado, ModoCursor modo);

//****************************************************************************************

void EstablecerVentana(int ancho, int alto);

//****************************************************************************************

#endif // UTILERIA_H_INCLUDED
