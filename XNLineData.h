//
//  XNLineData.h
//  XNMaths
//
//  Created by Нат Гаджибалаев on 23.11.09.
//  Copyright 2009 Нат Гаджибалаев. All rights reserved.
//

#pragma mark -
#pragma mark Imports && classes requirements 

#import <Cocoa/Cocoa.h>

@class XNFloatRange;
@class XNFunction;

#pragma mark -
#pragma mark XNLIneData class public interface

@interface XNLineData : NSObject {
	
	// Store line datapoints to render it really fast. 
	CGFloat *xData, *yData;
	
	// Value ranges
	XNFloatRange  *xRange, *yRange;
	
	// quality is an recalculation points count per one real number.
	NSUInteger quality, pointsCount;
}

#pragma mark -
#pragma mark XNLineData object public properties declaration

@property(readonly) CGFloat *xData;
@property(readonly) CGFloat *yData;
@property(readonly) XNFloatRange *xRange, *yRange;
@property(readonly) NSUInteger quality, pointsCount;


#pragma mark -
#pragma mark Class init methods
+ (XNLineData *) lineDataWithFunction: (XNFunction*)aFunction inRange: (XNFloatRange*)range withQuality: (NSUInteger) lineQuality;
+ (XNLineData *) lineDataWithXData: (CGFloat*)x yData:(CGFloat*)y pointsCount: (NSUInteger) count;

- (XNLineData *) initWithXData: (CGFloat*)x yData:(CGFloat*)y pointsCount: (NSUInteger) count;
- (XNLineData *) initWithFunction: (XNFunction *)aFunction inRange: (XNFloatRange*)newRange withQuality: (NSUInteger) lineQuality;

@end
