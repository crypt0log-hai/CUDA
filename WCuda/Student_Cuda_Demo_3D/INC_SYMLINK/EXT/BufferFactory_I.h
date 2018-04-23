#ifndef BUFFERFACTORY_I_H_
#define BUFFERFACTORY_I_H_

#include "Buffer.h"

/*----------------------------------------------------------------------*\
 |*			Declaration 					*|
 \*---------------------------------------------------------------------*/

/*--------------------------------------*\
 |*		Public			*|
 \*-------------------------------------*/

class BufferFactory_I
    {
    public:
	/*--------------------------------------*\
	 |*		Methodes		*|
	 \*-------------------------------------*/

	virtual gl::Buffer* createVertexBuffer()=0;

	virtual gl::Buffer* createElementBuffer()=0;

	/*--------------------------------------*\
	 |*		Destructor		*|
	 \*-------------------------------------*/

	virtual ~BufferFactory_I()
	    {
	    //Nothing its an interface
	    }
    };

#endif 

/*----------------------------------------------------------------------*\
 |*			End	 					*|
 \*---------------------------------------------------------------------*/
