FROM gcc:latest

WORKDIR /app

COPY . .

RUN make build

CMD ["./calculator"]