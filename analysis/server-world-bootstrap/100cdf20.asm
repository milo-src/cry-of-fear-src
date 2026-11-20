
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cdf20 <.text+0xccf20>:
100cdf20:	56                   	push   esi
100cdf21:	8b f1                	mov    esi,ecx
100cdf23:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100cdf26:	c7 06 00 00 00 00    	mov    DWORD PTR [esi],0x0
100cdf2c:	c7 46 04 00 00 00 00 	mov    DWORD PTR [esi+0x4],0x0
100cdf33:	c7 46 08 00 00 00 00 	mov    DWORD PTR [esi+0x8],0x0
100cdf3a:	85 c0                	test   eax,eax
100cdf3c:	74 10                	je     0x100cdf4e
100cdf3e:	50                   	push   eax
100cdf3f:	e8 8d 35 0a 00       	call   0x101714d1
100cdf44:	83 c4 04             	add    esp,0x4
100cdf47:	c7 46 10 00 00 00 00 	mov    DWORD PTR [esi+0x10],0x0
100cdf4e:	8b 46 0c             	mov    eax,DWORD PTR [esi+0xc]
100cdf51:	85 c0                	test   eax,eax
100cdf53:	74 10                	je     0x100cdf65
100cdf55:	50                   	push   eax
100cdf56:	e8 76 35 0a 00       	call   0x101714d1
100cdf5b:	83 c4 04             	add    esp,0x4
100cdf5e:	c7 46 0c 00 00 00 00 	mov    DWORD PTR [esi+0xc],0x0
100cdf65:	8b 46 24             	mov    eax,DWORD PTR [esi+0x24]
100cdf68:	85 c0                	test   eax,eax
100cdf6a:	74 10                	je     0x100cdf7c
100cdf6c:	50                   	push   eax
100cdf6d:	e8 5f 35 0a 00       	call   0x101714d1
100cdf72:	83 c4 04             	add    esp,0x4
100cdf75:	c7 46 24 00 00 00 00 	mov    DWORD PTR [esi+0x24],0x0
100cdf7c:	8b 46 14             	mov    eax,DWORD PTR [esi+0x14]
100cdf7f:	85 c0                	test   eax,eax
100cdf81:	74 10                	je     0x100cdf93
100cdf83:	50                   	push   eax
100cdf84:	e8 48 35 0a 00       	call   0x101714d1
100cdf89:	83 c4 04             	add    esp,0x4
100cdf8c:	c7 46 14 00 00 00 00 	mov    DWORD PTR [esi+0x14],0x0
100cdf93:	8b 86 bc 20 00 00    	mov    eax,DWORD PTR [esi+0x20bc]
100cdf99:	85 c0                	test   eax,eax
100cdf9b:	74 13                	je     0x100cdfb0
100cdf9d:	50                   	push   eax
100cdf9e:	e8 2e 35 0a 00       	call   0x101714d1
100cdfa3:	83 c4 04             	add    esp,0x4
100cdfa6:	c7 86 bc 20 00 00 00 	mov    DWORD PTR [esi+0x20bc],0x0
100cdfad:	00 00 00 
100cdfb0:	c7 46 18 00 00 00 00 	mov    DWORD PTR [esi+0x18],0x0
100cdfb7:	c7 46 1c 00 00 00 00 	mov    DWORD PTR [esi+0x1c],0x0
100cdfbe:	c7 46 20 00 00 00 00 	mov    DWORD PTR [esi+0x20],0x0
100cdfc5:	c7 86 c4 20 00 00 00 	mov    DWORD PTR [esi+0x20c4],0x0
100cdfcc:	00 00 00 
100cdfcf:	c7 86 c8 20 00 00 00 	mov    DWORD PTR [esi+0x20c8],0x0
100cdfd6:	00 00 00 
100cdfd9:	5e                   	pop    esi
100cdfda:	c3                   	ret
