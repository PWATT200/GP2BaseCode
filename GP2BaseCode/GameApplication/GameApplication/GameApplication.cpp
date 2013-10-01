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
	// delete things in reverse order
	if(m_pRenderer)
	{
		delete m_pRenderer;
		m_pRenderer = NULL;
	}
	if(m_pWindow)
	{
		delete m_pWindow;
		m_pWindow = NULL;
	}
}

//Init
//This initialises all subsystems
bool CGameApplication::init()
{
	if(!parseConfigFile())
		return false;
	if(!initWindow())
		return false;
	if(!initGraphics())
		return false;
	if(!initInput())
		return false;
	if(!initGame())
		return false;
	return true;
}

//called to parse the config file
bool CGameApplication::parseConfigFile()
{
	return true;
}

//initInput - Initialises the input 
bool CGameApplication::initInput()
{
	return true;
}

//initPhysics - Initialises the physics system
bool CGameApplication::initPhysics()
{
	return true;
}

//initGraphics - Initialises the graphics
bool CGameApplication::initGraphics()
{
	return true;
}

//initWindow - initialises the window
bool CGameApplication::initWindow()
{
	//Create a Win32 Window
	m_pWindow=new CWin32Window();
	m_pWindow->init(m_GameOptionDesc.gameName, m_GameOptionDesc.width, m_GameOptionDesc.height, m_GameOptionDesc.fullscreen);
	return true;
}

//called to init the game elements
bool CGameApplication::initGame()
{
	return true;
}

// Called to put the gane in a loop(aka game loop)
void CGameApplication::run()
{
	//while the window is not closed
	while(m_pWindow->running())
	{
		//check for all windows messages
		m_pWindow->checkForWindowMessages();
		//update
		update();
		//render
		render();
	}	
}

//Render, called to draw one frame of the game
void CGameApplication::render()
{

}

//Update, called to update the game
void CGameApplication::update()
{
	
}