# IPC using FIFO 
> Simple implementation of an **InterProcess Communication** using FIFO buffer.

## Installation

```bash
git clone git@github.com:prabhakar267/IPC-using-FIFO.git && cd IPC-using-FIFO
```

```
gcc server.c -o <server-file>
./<server-file>
```
```
gcc client.c -o <client-file>
./<client-file>
```

## Usage
 + Messages can only be integer values.
 + The messages ending with "1" are intended for server.
 + The messages ending with "2" are intended for clients and can be read by any of the clients which are currently operating on READ mode. 
 