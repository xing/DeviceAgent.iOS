// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  9 2018 18:32:08).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import <XCTest/XCUIElementTypes.h>
#import "CDStructures.h"
@protocol OS_dispatch_queue;
@protocol OS_xpc_object;

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface XCUIApplicationOpenRequest : NSObject
{
    BOOL _activateIfRunning;
    BOOL _terminateIfRunning;
    BOOL _usePlatformLauncher;
    NSArray *_launchArguments;
    NSDictionary *_environmentVariables;
}

@property BOOL activateIfRunning;
@property(copy) NSDictionary *environmentVariables;
@property(copy) NSArray *launchArguments;
@property BOOL terminateIfRunning;
@property BOOL usePlatformLauncher;

+ (id)activationRequestFromLaunchRequest:(id)arg1;
+ (id)activationRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3;
+ (id)launchRequestWithLaunchArguments:(id)arg1 environmentVariables:(id)arg2 usePlatformLauncher:(BOOL)arg3;

@end

