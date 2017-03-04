//
//  OCVOutputArrayable.h
//  LegoCV
//
//  Created by Dal Rupnik on 24/01/2017.
//  Copyright © 2017 Unified Sense. All rights reserved.
//

#import "OCVOutputArray.h"

@protocol OCVOutputArrayable <NSObject>

@property (nonatomic, readonly) OCVOutputArray *output;

@end

@protocol OCVOutputArrayOfArrayables <OCVOutputArrayable>

@end
