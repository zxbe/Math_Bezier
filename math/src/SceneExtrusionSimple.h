#pragma once

#include "SceneBase.h"
#include "ExtrusionSimple.h"

class SceneExtrusionSimple: public SceneBase
{
public:
	SceneExtrusionSimple(void);
	~SceneExtrusionSimple(void);

	void Init() override;
	void Update() override;
	void Draw() override;
	void keyPressed(int key) override;
	void keyReleased(int key) override;
	void mouseMoved(int x, int y) override;
	void mouseDragged(int x, int y, int button) override;
	void mousePressed(int x, int y, int button) override;
	void mouseReleased(int x, int y, int button) override;

	ofEasyCam cam;

	ofxPanel gui;

	ExtrusionSimple extrusionSimple;
};

