
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10104ec0 <.text+0x103ec0>:
10104ec0:	56                   	push   esi
10104ec1:	57                   	push   edi
10104ec2:	8b f9                	mov    edi,ecx
10104ec4:	e8 77 fe ff ff       	call   0x10104d40
10104ec9:	8b 37                	mov    esi,DWORD PTR [edi]
10104ecb:	83 ec 10             	sub    esp,0x10
10104ece:	c7 44 24 0c 00 00 00 	mov    DWORD PTR [esp+0xc],0x40000000
10104ed5:	40 
10104ed6:	c7 44 24 08 00 00 80 	mov    DWORD PTR [esp+0x8],0x3f800000
10104edd:	3f 
10104ede:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x404ccccd
10104ee5:	40 
10104ee6:	c7 04 24 33 33 33 40 	mov    DWORD PTR [esp],0x40333333
10104eed:	ff 15 b4 30 22 10    	call   DWORD PTR ds:0x102230b4
10104ef3:	83 c4 04             	add    esp,0x4
10104ef6:	8b cf                	mov    ecx,edi
10104ef8:	d9 1c 24             	fstp   DWORD PTR [esp]
10104efb:	ff b7 74 03 00 00    	push   DWORD PTR [edi+0x374]
10104f01:	ff 96 a0 01 00 00    	call   DWORD PTR [esi+0x1a0]
10104f07:	5f                   	pop    edi
10104f08:	5e                   	pop    esi
10104f09:	c3                   	ret
