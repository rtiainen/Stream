//
//  HexFiendAnalyzer.h
//  Stream
//
//  Created by tim lindner on 9/11/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Analyzation.h"
#import "StStream.h"
#import "StAnalyzer.h"
#import "StBlock.h"

@interface HexFiendAnalyzer : NSObject
{
    StAnalyzer *representedObject;
}

@property (assign) StAnalyzer * representedObject;
@property (nonatomic, retain) NSData *resultingData;

- (void)analyzeData;

@end
