//
//  AWHMMNoticeContentNewCell.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMReturnUrlBlock)(NSString *str);
@interface AWHMMNoticeContentNewCell : UIView
//通知
@property(nonatomic,strong)UILabel *headLab;
@property(nonatomic,strong)UILabel *headTitleLab;
@property(nonatomic,strong)UITextView *titleTextView;
@property (nonatomic, strong) UIView *downView;
@property(nonatomic,strong)UIButton *downBtn;
@property(nonatomic,strong)UILabel *downBtnLab;
@property(nonatomic,strong)NSString *fileType;
/** */
@property(nonatomic,copy)AWHMMReturnUrlBlock ReturnUrlBlock;

@end

NS_ASSUME_NONNULL_END
