
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10015010 <.text+0x14010>:
10015010:	56                   	push   esi
10015011:	57                   	push   edi
10015012:	8b f9                	mov    edi,ecx
10015014:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10015017:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
1001501e:	00 00 00 
10015021:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10015024:	c7 80 0c 01 00 00 04 	mov    DWORD PTR [eax+0x10c],0x4
1001502b:	00 00 00 
1001502e:	8b 77 04             	mov    esi,DWORD PTR [edi+0x4]
10015031:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10015036:	8b 96 b8 00 00 00    	mov    edx,DWORD PTR [esi+0xb8]
1001503c:	03 90 98 00 00 00    	add    edx,DWORD PTR [eax+0x98]
10015042:	52                   	push   edx
10015043:	ff b6 0c 02 00 00    	push   DWORD PTR [esi+0x20c]
10015049:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
1001504f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10015052:	83 c4 08             	add    esp,0x8
10015055:	c7 80 70 01 00 00 00 	mov    DWORD PTR [eax+0x170],0x3f800000
1001505c:	00 80 3f 
1001505f:	8b 47 04             	mov    eax,DWORD PTR [edi+0x4]
10015062:	5f                   	pop    edi
10015063:	5e                   	pop    esi
10015064:	f6 80 a4 01 00 00 02 	test   BYTE PTR [eax+0x1a4],0x2
1001506b:	74 0a                	je     0x10015077
1001506d:	c7 80 34 01 00 00 00 	mov    DWORD PTR [eax+0x134],0x3f800000
10015074:	00 80 3f 
10015077:	c3                   	ret
