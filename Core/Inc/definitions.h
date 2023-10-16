#define ENC_ADDR 0x36
#define RAW_ANG1_REG 0x0C
#define RAW_ANG2_REG 0x0D
#define MASK 0x01

uint32_t curr_time;
uint32_t prev_time;
uint32_t loop_time;

uint32_t period = 10;	//  ms


uint32_t timeout_UART = 10;	// UART timeout ms
uint32_t timeout_i2c = 5;	// I2C timeout ms

uint8_t Reg_buf[1] = {RAW_ANG1_REG};

uint8_t Data_buf[2] = {0,0};

uint16_t pos_data_16t;
