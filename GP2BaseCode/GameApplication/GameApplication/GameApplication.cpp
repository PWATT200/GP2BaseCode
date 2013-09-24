#include "GameApplication.h"

//should really check to see if we are on a windows platform
#include "../Window/Win32Window.h"

//constructor
CGameApplication::CGameApplication(void)
{
	//Set to NULL
	m_pWindow=NULL;
	//Set the window name to GP2
	m_GameOptionDesc.gameName=TEXT("GP2");
	//Window Height and Width
	m_GameOptionDesc.width=640;
	m_GameOptionDesc.height=480;
	//FullScreen
	m_GameOptionDesc.fullscreen=false;
	//config options
	m_ConfigFileName=TEXT("game.cfg");
}

//desconstructor
CGameApplication::~CGameApplication(void)
{
	// delete 
}