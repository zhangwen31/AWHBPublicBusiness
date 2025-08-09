//
//  AWHBPBMLCustomSheet.h
//  Medicine
//
//  Created by Visoport on 20/12/16.
//  Copyright © 2016年 Visoport. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol AWHBPBMLCustomSheetDelegate <NSObject>

-(void)clickButton:(NSUInteger)buttonTag sheetCount:(NSUInteger)sheet;

@end

@interface AWHBPBMLCustomSheet : UIView


@property (nonatomic,weak) id<AWHBPBMLCustomSheetDelegate>delegate;

@property (nonatomic, assign) NSInteger sheetMark;


-(AWHBPBMLCustomSheet*)initWithButtons:(NSArray*)allButtons isTableView:(BOOL)tableView;

@end
