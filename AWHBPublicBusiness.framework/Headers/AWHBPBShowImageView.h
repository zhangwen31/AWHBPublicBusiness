//
//  AWHBPBShowImageView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBShowImageView : UIView

@property (nonatomic, assign) CGFloat viewWidth;
//每行展示数量
@property (nonatomic, assign) NSInteger eachRowNumber;

@property (nonatomic, strong) NSArray *selectImages;

@end

NS_ASSUME_NONNULL_END
