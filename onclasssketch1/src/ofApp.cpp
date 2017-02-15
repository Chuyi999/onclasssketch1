#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){
    
    if (myX > ofGetWidth()-100 || myX < 0) {
        pxOffset *= -1;  // changes the sign of the number
    }
    
    myX += 2*pxOffset;  // change our x location
    if (myY > ofGetHeight()-100 || myY < 0) {
        pyOffset *= -1;  // changes the sign of the number
    }
    
     myY += 2*pyOffset;  // change our x location
    
   


}

//--------------------------------------------------------------
void ofApp::draw(){


    int modValue = myX % 100;                             // our X location modulo 100
    int colorChange = ofMap (modValue, 0, 99, -200, 200); // map it to desired range
    int absCC = abs (colorChange);                        // use the absolute value
    
    ofSetColor(0, absCC, 255);
    ofDrawCircle(myX+50, myY+50, 50);


    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if(key == 'w'){
        ofLog(OF_LOG_NOTICE,"Char Pressed:w");
        pxOffset *= -1;
    }else if(key=='s'){
        ofLog(OF_LOG_NOTICE,"Char Pressed:s");
        pyOffset *= -1;
        
    }



        
        

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){








}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
//    mouseX=x;
//    mouseY=y;
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
