//
//  AWHSCMapStyleSelectionTypeView.h
//  AWHSettingConfig
//
//  Created by 王恒 on 2023/8/5.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHSCReturnMapStyleSelectionClickTitle)(NSString * _Nullable title);

@interface AWHSCMapStyleSelectionTypeView : UIView

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detailTextField;
@property(nonatomic,strong)UIView *line;
@property(nonatomic,strong)UIButton *startTrackingBtn;
@property(nonatomic,strong)UIButton *endTrackingBtn;
@property(nonatomic,copy)AWHSCReturnMapStyleSelectionClickTitle ReturnClickTitle;
- (void)trackingClick:(NSString *)text;

@end

NS_ASSUME_NONNULL_END
