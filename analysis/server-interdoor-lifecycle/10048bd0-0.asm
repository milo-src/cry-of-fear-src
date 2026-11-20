
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10048bd0 <.text+0x47bd0>:
10048bd0:	56                   	push   esi
10048bd1:	8b f1                	mov    esi,ecx
10048bd3:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048bd6:	f6 80 a4 01 00 00 04 	test   BYTE PTR [eax+0x1a4],0x4
10048bdd:	74 07                	je     0x10048be6
10048bdf:	c6 86 80 01 00 00 01 	mov    BYTE PTR [esi+0x180],0x1
10048be6:	8b 06                	mov    eax,DWORD PTR [esi]
10048be8:	ff 50 30             	call   DWORD PTR [eax+0x30]
10048beb:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048bee:	c7 80 0c 01 00 00 04 	mov    DWORD PTR [eax+0x10c],0x4
10048bf5:	00 00 00 
10048bf8:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048bfb:	c7 80 08 01 00 00 07 	mov    DWORD PTR [eax+0x108],0x7
10048c02:	00 00 00 
10048c05:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10048c08:	83 c0 08             	add    eax,0x8
10048c0b:	50                   	push   eax
10048c0c:	56                   	push   esi
10048c0d:	e8 ce 13 0d 00       	call   0x10119fe0
10048c12:	8b 4e 04             	mov    ecx,DWORD PTR [esi+0x4]
10048c15:	8d 81 e8 00 00 00    	lea    eax,[ecx+0xe8]
10048c1b:	50                   	push   eax
10048c1c:	8d 81 dc 00 00 00    	lea    eax,[ecx+0xdc]
10048c22:	50                   	push   eax
10048c23:	51                   	push   ecx
10048c24:	e8 07 14 0d 00       	call   0x1011a030
10048c29:	8b 56 04             	mov    edx,DWORD PTR [esi+0x4]
10048c2c:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048c31:	8b 8a b8 00 00 00    	mov    ecx,DWORD PTR [edx+0xb8]
10048c37:	03 88 98 00 00 00    	add    ecx,DWORD PTR [eax+0x98]
10048c3d:	51                   	push   ecx
10048c3e:	ff b2 0c 02 00 00    	push   DWORD PTR [edx+0x20c]
10048c44:	ff 15 50 2f 22 10    	call   DWORD PTR ds:0x10222f50
10048c4a:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10048c4f:	83 c4 1c             	add    esp,0x1c
10048c52:	8b 00                	mov    eax,DWORD PTR [eax]
10048c54:	89 86 a4 01 00 00    	mov    DWORD PTR [esi+0x1a4],eax
10048c5a:	c7 86 a8 01 00 00 00 	mov    DWORD PTR [esi+0x1a8],0xbf800000
10048c61:	00 80 bf 
10048c64:	c7 86 ac 01 00 00 00 	mov    DWORD PTR [esi+0x1ac],0xbf800000
10048c6b:	00 80 bf 
10048c6e:	5e                   	pop    esi
10048c6f:	c3                   	ret
