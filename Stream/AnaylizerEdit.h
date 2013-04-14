//
//  AnaylizerEdit.h
//  Stream
//
//  Created by tim lindner on 4/11/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class StAnaylizer;

@interface AnaylizerEdit : NSManagedObject

@property (nonatomic, retain) NSData * data;
@property (nonatomic) int64_t length;
@property (nonatomic) int64_t location;
@property (nonatomic, retain) StAnaylizer *parent;

@end