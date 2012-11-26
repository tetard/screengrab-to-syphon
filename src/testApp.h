#pragma once

#include "ofMain.h"
#include "ofxOpenCv.h"
#include "ofxSyphon.h"


class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
        int captureWidth;
        int captureHeight;
    
//		ofTexture	tex;
		//ofPixels	pixels;
		ofImage		image;
		ofxCvHaarFinder finder;	 // object used to detect haar features

        ofxSyphonServer mainOutputSyphonServer;

    
};
