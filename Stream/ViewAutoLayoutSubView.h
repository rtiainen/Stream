//
//  ViewAutoLayoutSubView.h
//  Stream
//
//  Created by tim lindner on 8/3/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface ViewAutoLayoutSubView : NSView
{
    NSMutableArray *newConstraints;
}

@property(nonatomic, retain) NSMutableArray *newConstraints;
@end
