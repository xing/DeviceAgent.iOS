// class-dump results processed by bin/class-dump/dump.rb
//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Apr 12 2019 07:16:25).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@protocol XCUIScreenDataSource <NSObject>
- (void)requestScaleForScreenWithIdentifier:(NSInteger)arg1 completion:(void (^)(double, NSError *))arg2;
- (void)requestScreenIdentifiersWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)requestScreenshotOfScreenWithID:(NSInteger)arg1 withRect:(CGRect)arg2 scale:(double)arg3 formatUTI:(NSString *)arg4 compressionQuality:(double)arg5 withReply:(void (^)(NSData *, NSError *))arg6;
@end
