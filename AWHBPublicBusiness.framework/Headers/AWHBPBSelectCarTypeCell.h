//
//  AWHBPBSelectCarTypeCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/4/15.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBSelectCarTypeCell : UITableViewCell

@property (nonatomic, strong) NSString *title;

@property (nonatomic, assign) BOOL isSelect;

@property (nonatomic, assign) BOOL isHiddenLine;

@end

NS_ASSUME_NONNULL_END
