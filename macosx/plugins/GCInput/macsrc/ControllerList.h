/*
 * Copyright (c) 2010, Wei Mingzhi <whistler_wmz@users.sf.net>.
 * All Rights Reserved.
 *
 * Based on HIDInput by Gil Pedersen.
 * Copyright (c) 2004, Gil Pedersen.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see <http://www.gnu.org/licenses>.
 */

#define ControllerList NetPcsxrGCInputPluginControllerList

#import <Cocoa/Cocoa.h>
#include "cfg.h"

@interface ControllerList : NSObject <NSTableViewDataSource>
@property (getter = isUsingSDL2) BOOL usingSDL2;

- (id)initWithConfig;

+ (void)setCurrentController:(int)which;
+ (int)currentController;
+ (int)buttonOfRow:(NSInteger)row;
- (void)deleteRow:(NSInteger)which;

@end
