//
//  AWHBPBRollNewLabel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, KRollLabelType) {
   KRollLabelTypeLeft = 0,//向左边滚动
   KRollLabelTypeLeftRight = 1,//先向左边，再向右边滚动
};

@interface AWHBPBRollNewLabel : UILabel

@property(nonatomic,unsafe_unretained)KRollLabelType rollLabelType;
@property(nonatomic,unsafe_unretained)CGFloat speed;//速度
@property(nonatomic,unsafe_unretained)CGFloat secondLabelInterval;
@property(nonatomic,unsafe_unretained)NSTimeInterval stopTime;//滚到顶的停止时间

@end

NS_ASSUME_NONNULL_END
