
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10046c30 <.text+0x45c30>:
10046c30:	56                   	push   esi
10046c31:	6a 64                	push   0x64
10046c33:	6a 00                	push   0x0
10046c35:	83 ec 08             	sub    esp,0x8
10046c38:	8b f1                	mov    esi,ecx
10046c3a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10046c3d:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10046c44:	3f 
10046c45:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10046c4c:	68 08 08 1b 10       	push   0x101b0808
10046c51:	6a 02                	push   0x2
10046c53:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10046c59:	e8 92 5d 0b 00       	call   0x100fc9f0
10046c5e:	8b 06                	mov    eax,DWORD PTR [esi]
10046c60:	83 c4 18             	add    esp,0x18
10046c63:	8b ce                	mov    ecx,esi
10046c65:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10046c6c:	ff 50 08             	call   DWORD PTR [eax+0x8]
10046c6f:	c7 46 78 c0 56 04 10 	mov    DWORD PTR [esi+0x78],0x100456c0
10046c76:	a1 88 31 22 10       	mov    eax,ds:0x10223188
10046c7b:	f3 0f 10 00          	movss  xmm0,DWORD PTR [eax]
10046c7f:	f3 0f 58 05 24 97 1a 	addss  xmm0,DWORD PTR ds:0x101a9724
10046c86:	10 
10046c87:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10046c8d:	f3 0f 11 80 08 03 00 	movss  DWORD PTR [eax+0x308],xmm0
10046c94:	00 
10046c95:	f3 0f 11 86 d4 01 00 	movss  DWORD PTR [esi+0x1d4],xmm0
10046c9c:	00 
10046c9d:	f3 0f 11 86 d0 01 00 	movss  DWORD PTR [esi+0x1d0],xmm0
10046ca4:	00 
10046ca5:	f3 0f 11 86 cc 01 00 	movss  DWORD PTR [esi+0x1cc],xmm0
10046cac:	00 
10046cad:	5e                   	pop    esi
10046cae:	c3                   	ret
