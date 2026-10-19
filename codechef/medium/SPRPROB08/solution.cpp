class Codechef {
    public static void main(String[] args) {

        // Decide payment type (could be user input / config)
        String paymentType = "UPI";

            paymentService = new CreditCardPaymentService();
        } else if (paymentType.equals("UPI")) {
        PaymentService paymentService;

        if (paymentType.equals("CREDIT_CARD")) {
            paymentService = new UPIPaymentService();
        } else if (paymentType.equals("WALLET")) {
            paymentService = new WalletPaymentService();
        } else if (paymentType.equals("NET_BANKING")) {
            paymentService = new NetBankingPaymentService();
        } else if (paymentType.equals("COD")) {
            paymentService = new CashOnDeliveryPaymentService();
        } else {
            throw new RuntimeException("Invalid payment type");
        }

        OrderService orderService = new OrderService(paymentService);
        orderService.placeOrder();
    }
}
