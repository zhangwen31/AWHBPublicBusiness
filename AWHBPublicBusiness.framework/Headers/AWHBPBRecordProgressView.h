//
//  AWHBPBRecordProgressView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBRecordProgressView : UIView

-(void)updateProgressWithValue:(CGFloat)progress;
-(void)resetProgress;

@end

NS_ASSUME_NONNULL_END
