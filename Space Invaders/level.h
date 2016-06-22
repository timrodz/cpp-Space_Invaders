#pragma once

#if !defined(__LEVEL_H__)
#define __LEVEL_H__

// Library Includes
#include <vector>
#include <string>

// Local Includes

// Types

// Constants

// Prototypes
class CBullet;
class CPlayer;
class CAlien;
class CFPSCounter;
class CBackGround;

class CLevel
{
	// Member Functions
public:
	CLevel();
	virtual ~CLevel();

	virtual bool Initialise(int _iWidth, int _iHeight);

	virtual void Draw();
	virtual void Process(float _fDeltaTick);

	CPlayer* GetPlayer() const;
	void SetAlienShipSpeed(float _fSpeed);
	void SetAlienBulletSpeed(float _fSpeed);

	int GetAliensRemaining() const;

protected:
	void ProcessBallWallCollision();
	void ProcessPaddleWallCollison();
	void ProcessBallPaddleCollision();

	void ProcessBulletEdgeCollision();
	void ProcessBulletAlienCollision();
	void ProcessBulletPlayerCollision();

	void ProcessCheckForWin();

	void ProcessBallBounds();

	void UpdateScoreText();
	void DrawScore();
	void DrawFPS();

	void SetAliensRemaining(int _i);

private:
	CLevel(const CLevel& _kr);
	CLevel& operator= (const CLevel& _kr);

	// Member Variables
public:

protected:
	CBackGround* m_pBackground;
	CBullet* m_pBullet;

	CPlayer* m_pPlayer;
	std::vector<CAlien*> m_aliens[11];
	std::vector<CAlien*> m_vecAliens;

	std::vector<CBullet*> m_vecPlayerBullets;
	std::vector<CBullet*> m_vecEnemyBullets;

	CFPSCounter* m_fpsCounter;

	std::string m_strScore;

	int m_iWidth;
	int m_iHeight;

	int m_iAliensRemaining;

	static int m_iPlayerLives;

private:

};

#endif    // __LEVEL_H__