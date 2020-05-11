#include "bsp.h"
#include "gpio.h"

/*! \brief
*       gpio pin initilization
* \param port[IN]           - gpio port index.
* \param pin[IN]            - gpio pin index.
* \param mode[IN]           - gpio pin init mode.
*/
uint8_t gpio_init(Port port, Pin pin, u8 mode)
{
    return BSP_GPIO_Init(port, pin, mode);
}

/*! \brief
*       set gpio pin to 1
* \param port[IN]           - gpio port index.
* \param pin[IN]            - gpio pin index.
*/
uint8_t gpio_set_high(Port port, Pin pin)
{
    return BSP_GPIO_SetHigh(port, pin);
}

/*! \brief
*       set gpio pin to 0
* \param port[IN]           - gpio port index.
* \param pin[IN]            - gpio pin index.
*/
uint8_t gpio_set_low(Port port, Pin pin)
{
    return BSP_GPIO_SetLow(port, pin);
}

/*! \brief
*       read gpio state
* \param port[IN]           - gpio port index.
* \param pin[IN]            - gpio pin index.
* \return
*       gpio state:0-low level;1-high level
*/
uint8_t  gpio_read_state(Port port, Pin pin)
{
    return BSP_GPIO_ReadState(port, pin);
}
