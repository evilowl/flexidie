/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

//#import "NSObject.h"

//#import "SHShotDataCacheOperationDelegate-Protocol.h"

@class FBReachability, NSMutableDictionary, /*NSObject<OS_dispatch_queue>, */SHNetworkOperationQueue;

@interface SHShotDataCache : NSObject //<SHShotDataCacheOperationDelegate>
{
    SHNetworkOperationQueue *_operationQueue;
    NSMutableDictionary *_operationsDictionary;
    NSObject<OS_dispatch_queue> *_cacheDispatchQueue;
    FBReachability *_reachabilityManager;
    NSObject<OS_dispatch_queue> *_reachabilityDispatchQueue;
}

+ (id)fileCachePathForShot:(id)arg1;
+ (id)_sharedCacheFolder;
//- (void).cxx_destruct;
- (void)_postServiceDidDownloadNotificationForShot:(id)arg1 withDuration:(double)arg2;
- (void)shotDataCacheOperation:(id)arg1 didFailDownloadingForShot:(id)arg2 error:(id)arg3 shouldRetry:(BOOL)arg4;
- (void)shotDataCacheOperation:(id)arg1 didFinishDownloadingForShot:(id)arg2 withDuration:(double)arg3;
- (void)_reachabilityChanged:(id)arg1;
- (void)stopObservingReachability;
- (void)startObservingReachability;
- (BOOL)fileCacheExistsForShot:(id)arg1;
- (void)cancelAllOperations;
- (void)clearCacheForShot:(id)arg1;
- (void)clearCachedResourcesNotInShots:(id)arg1;
- (id)_operationForShot:(id)arg1;
- (BOOL)_hasOperationForShotWithIdentifier:(id)arg1;
- (void)_didFinishOperationForShotWithIdentifier:(id)arg1;
- (void)_resortOperations;
- (void)_setQueuePriority:(int)arg1 forOperationForShot:(id)arg2;
- (void)_addOperationForShot:(id)arg1 queuePriority:(int)arg2;
- (void)_fetchDataForShotIfNeeded:(id)arg1 queuePriority:(int)arg2 forceChangePriority:(BOOL)arg3;
- (void)fetchDataForShotsIfNeeded:(id)arg1 queuePriority:(int)arg2 forceChangePriority:(BOOL)arg3;
- (void)dealloc;
- (id)init;

@end

