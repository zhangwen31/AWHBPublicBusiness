//
//  AWHBPBVidoeRecordViewController.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol AWHBPBVidoeRecordDelegate <NSObject>

- (void)selectVideoRecordPathUrl:(NSURL *)videoUrl time:(NSInteger)time;

@end

@interface AWHBPBVidoeRecordViewController : UIViewController

@property (nonatomic, weak) id<AWHBPBVidoeRecordDelegate> delegate;

@end

NS_ASSUME_NONNULL_END
