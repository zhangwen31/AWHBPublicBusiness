//
//  AWHBPBSystemPageTitleCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSystemPageTitleCell : UITableViewCell

@property(nonatomic,strong)UITextField *textField;

@property (nonatomic, strong) NSString *titleName;

@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
