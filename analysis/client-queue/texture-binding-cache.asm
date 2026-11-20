10060e10:	55                   	push   ebp
10060e11:	8b ec                	mov    ebp,esp
10060e13:	56                   	push   esi
10060e14:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10060e17:	57                   	push   edi
10060e18:	8b 7d 0c             	mov    edi,DWORD PTR [ebp+0xc]
10060e1b:	39 3c b5 b0 cc 4a 10 	cmp    DWORD PTR [esi*4+0x104accb0],edi
10060e22:	74 1a                	je     0x10060e3e
10060e24:	56                   	push   esi
10060e25:	ff 15 64 e7 1b 10    	call   DWORD PTR ds:0x101be764
10060e2b:	57                   	push   edi
10060e2c:	68 e1 0d 00 00       	push   0xde1
10060e31:	ff 15 4c e6 1b 10    	call   DWORD PTR ds:0x101be64c
10060e37:	89 3c b5 b0 cc 4a 10 	mov    DWORD PTR [esi*4+0x104accb0],edi
10060e3e:	5f                   	pop    edi
10060e3f:	5e                   	pop    esi
10060e40:	5d                   	pop    ebp
10060e41:	c3                   	ret
