//
//  AWHRMAddCarViewTableViewCell.h
//  AWHReportModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHRMReturnTextFieldTextBlock)(NSString *textFieldText);
typedef void(^AWHRMScanCodeBlock)(NSString *textFieldText);
@interface AWHRMAddCarViewTableViewCell : UITableViewCell

@property(nonatomic,strong)UILabel *titleLab;
@property(nonatomic,strong)UITextField *detaleTextField;
@property(nonatomic,strong)UIImageView *rightImageView;
@property (nonatomic, strong) UIButton *scanCodeBut;
@property (nonatomic, assign) BOOL isHiddenLine;
@property (nonatomic, assign) BOOL isChar;
@property (nonatomic, assign) BOOL isShowScanCode;
@property (nonatomic, assign) NSInteger maxLength;
@property (nonatomic, assign) NSInteger maxNum;
@property(nonatomic,copy)AWHRMReturnTextFieldTextBlock ReturnTextFieldTextBlock;
@property(nonatomic,copy)AWHRMScanCodeBlock scanCodeBlock;

@end

NS_ASSUME_NONNULL_END
