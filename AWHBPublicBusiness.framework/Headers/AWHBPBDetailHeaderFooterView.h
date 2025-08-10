//
//  AWHBPBDetailHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/1/4.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, AWHBPBCarDetailTMNType) {
    AWHBPBCarDetailTMNTypeLocation      = 0,    // 定位
    AWHBPBCarDetailTMNTypeVideo         = 1,    // 视频
    AWHBPBCarDetailTMNTypeSafety        = 2,    // 主动安全
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBDetailHeaderFooterView : UITableViewHeaderFooterView

///标题
@property (nonatomic, strong) UILabel *titleLabel;
/// 是否展示右边按钮
@property (nonatomic, assign) BOOL isShowRight;
/**
 * 是否是多终端
 */
@property(nonatomic, assign) BOOL isMultiTerminal;

@property(nonatomic, assign) AWHBPBCarDetailTMNType type;

@property (nonatomic, copy) void (^selectFunctionBlock)(AWHBPBCarDetailTMNType type);

@end

NS_ASSUME_NONNULL_END
