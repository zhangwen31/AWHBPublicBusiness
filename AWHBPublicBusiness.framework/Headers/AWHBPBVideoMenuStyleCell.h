//
//  AWHBPBVideoMenuStyleCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/6/1.
//

#import <UIKit/UIKit.h>
typedef void(^AWHBPBVideoMenuStyleClickTitle)(NSString * _Nullable title);
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBVideoMenuStyleCell : UITableViewCell

@property (nonatomic, strong) NSString *titleName;
//是否选择悬浮显示
@property (nonatomic, assign) BOOL isFloatingDisplay;
/// 悬浮显示
@property(nonatomic,strong)UIButton *floatingDisplayBtn;
///  固定底部
@property(nonatomic,strong)UIButton *fixedBottomBtn;
@property (nonatomic, assign) BOOL isHiddenLine;
@property(nonatomic,copy)AWHBPBVideoMenuStyleClickTitle ReturnClickTitle;

@end

NS_ASSUME_NONNULL_END
