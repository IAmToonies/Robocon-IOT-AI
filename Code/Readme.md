### Download
- https://www.st.com/en/development-tools/stm32cubeide.html
- https://www.st.com/en/development-tools/stm32cubemx.html
- https://www.st.com/en/development-tools/stm32cubeprog.html
- https://www.st.com/en/development-tools/stsw-link004.html


### Giải thích code
- `Pin đọc , port xuất` ! Nếu đặt điều kiện if (port .... ) tức là lấy giá trị trong thanh ghi . ( đã được lưu ở đó ). Còn if(pin .... ) thì đọc từ ngoài vào
- `HAL_GPIO_ReadPin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin)`: đọc giá trị (Button, ...)
- `HAL_GPIO_WritePin(GPIO_TypeDef *GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState)`: Ghi giá trị lên (Led, ...)
