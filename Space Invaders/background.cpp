// Library Includes

// Local Includes
#include "resource.h"
#include "utils.h"
#include "backbuffer.h"
#include "game.h"

// This Include
#include "background.h"

// Static Variables

// Static Function Prototypes

// Implementation

CBackGround::CBackGround()
{

}

CBackGround::~CBackGround()
{

}

bool
CBackGround::Initialise()
{
	VALIDATE(CEntity::Initialise(IDB_BACKGROUND, IDB_BACKGROUNDMASK));

	return (true);
}

void
CBackGround::Draw()
{
	CEntity::Draw();
}

void
CBackGround::Process(float _fDeltaTick)
{
	CEntity::Process(_fDeltaTick);
}