//
//  AWHBPBRollLabel.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef NS_ENUM(NSUInteger, KJMarqueeLabelType) {
   KJMarqueeLabelTypeLeft = 0,//向左边滚动
   KJMarqueeLabelTypeLeftRight = 1,//先向左边，再向右边滚动
};

@interface AWHBPBRollLabel : UILabel
@property(nonatomic,unsafe_unretained)KJMarqueeLabelType marqueeLabelType;
@property(nonatomic,unsafe_unretained)CGFloat speed;//速度
@property(nonatomic,unsafe_unretained)CGFloat secondLabelInterval;
@property(nonatomic,unsafe_unretained)NSTimeInterval stopTime;//滚到顶的停止时间
@property(nonatomic,assign)NSInteger num1;
@property(nonatomic,assign)NSInteger num2;
@property(nonatomic,assign)NSInteger num3;
@property(nonatomic,assign)NSInteger num4;
@property(nonatomic,assign)NSInteger num5;
@end

NS_ASSUME_NONNULL_END
