//
//  XNLinearEquationSystem.h
//  Assignation 3.2
//
//  Linear Equations system class. 
//  Only supports solving with sweep (spline) method. 
//
//  Created by Нат Гаджибалаев on 15.11.09.
//  Copyright 2009 Нат Гаджибалаев. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "XNVector.h" 
#import "XNMatrix.h" 

@interface XNLinearEquationSystem : NSObject {
	
	// some data of the equation system. 
	XNMatrix *equationMatrix;
	XNMatrix *leftSideMatrix; 
	XNVector *rightSideVector; 
}


#pragma mark -
#pragma mark Initialization methods 
- (XNLinearEquationSystem *) initWithMatrix: (XNMatrix *)newEquationMatrix;


- (XNVector *) sweep;
@end