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

#import "XCTTestScheduler-Protocol.h"

@class NSMutableArray, NSMutableSet, NSSet;
@protocol OS_dispatch_queue, XCTTestSchedulerDelegate;

@interface XCTFixedPriorityTestScheduler : NSObject <XCTTestScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_undispatchedTestIdentifierGroups;
    NSSet *_testIdentifiersToSkip;
    NSMutableSet *_inFlightWorkers;
    CDUnknownBlockType _prioritizer;
    BOOL _hasStarted;
    NSMutableSet *_queuedWorkers;
    id <XCTTestSchedulerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property __weak id <XCTTestSchedulerDelegate> delegate;
@property(retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property BOOL hasStarted;
@property(readonly) NSMutableSet *inFlightWorkers;
@property(readonly) CDUnknownBlockType prioritizer;
@property(readonly) NSObject<OS_dispatch_queue> *queue;
@property(readonly) NSMutableSet *queuedWorkers;
@property(retain) NSSet *testIdentifiersToSkip;
@property(retain) NSMutableArray *undispatchedTestIdentifierGroups;
@property(retain) NSObject<OS_dispatch_queue> *workerQueue;

+ (CDUnknownBlockType)classBasedLPTPrioritizerForClassTimes:(id)arg1 fallbackExecutionOrdering:(NSInteger)arg2;
- (void)_queue_dispatchWorkToWorker:(id)arg1;
- (id)_queue_nextBatchOfWork;
- (id)initWithPrioritizer:(CDUnknownBlockType)arg1;
- (void)startWithTestIdentifiersToRun:(id)arg1 testIdentifiersToSkip:(id)arg2;
- (void)workerDidBecomeAvailable:(id)arg1;

@end

