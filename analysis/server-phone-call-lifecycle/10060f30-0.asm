
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10060f30 <.text+0x5ff30>:
10060f30:	56                   	push   esi
10060f31:	8b f1                	mov    esi,ecx
10060f33:	8b 06                	mov    eax,DWORD PTR [esi]
10060f35:	ff 50 30             	call   DWORD PTR [eax+0x30]
10060f38:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10060f3b:	83 c0 08             	add    eax,0x8
10060f3e:	50                   	push   eax
10060f3f:	56                   	push   esi
10060f40:	e8 9b 90 0b 00       	call   0x10119fe0
10060f45:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10060f48:	83 c4 08             	add    esp,0x8
10060f4b:	c7 80 0c 01 00 00 00 	mov    DWORD PTR [eax+0x10c],0x0
10060f52:	00 00 00 
10060f55:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10060f58:	c7 80 18 01 00 00 80 	mov    DWORD PTR [eax+0x118],0x80
10060f5f:	00 00 00 
10060f62:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10060f65:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10060f6c:	10 
10060f6d:	66 0f d6 41 74       	movq   QWORD PTR [ecx+0x74],xmm0
10060f72:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10060f77:	89 41 7c             	mov    DWORD PTR [ecx+0x7c],eax
10060f7a:	83 be f4 01 00 00 00 	cmp    DWORD PTR [esi+0x1f4],0x0
10060f81:	c6 86 dc 00 00 00 00 	mov    BYTE PTR [esi+0xdc],0x0
10060f88:	75 0a                	jne    0x10060f94
10060f8a:	c7 86 f4 01 00 00 01 	mov    DWORD PTR [esi+0x1f4],0x1
10060f91:	00 00 00 
10060f94:	5e                   	pop    esi
10060f95:	c3                   	ret
