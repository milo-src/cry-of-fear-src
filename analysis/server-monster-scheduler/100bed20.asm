
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100bed20 <.text+0xbdd20>:
100bed20:	55                   	push   ebp
100bed21:	8b ec                	mov    ebp,esp
100bed23:	51                   	push   ecx
100bed24:	56                   	push   esi
100bed25:	8b f1                	mov    esi,ecx
100bed27:	51                   	push   ecx
100bed28:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bed2b:	f3 0f 10 40 54       	movss  xmm0,DWORD PTR [eax+0x54]
100bed30:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100bed35:	e8 e6 86 05 00       	call   0x10117420
100bed3a:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100bed3d:	83 c4 04             	add    esp,0x4
100bed40:	d9 5d fc             	fstp   DWORD PTR [ebp-0x4]
100bed43:	f3 0f 10 45 fc       	movss  xmm0,DWORD PTR [ebp-0x4]
100bed48:	f3 0f 10 88 ac 00 00 	movss  xmm1,DWORD PTR [eax+0xac]
100bed4f:	00 
100bed50:	0f 2e c1             	ucomiss xmm0,xmm1
100bed53:	5e                   	pop    esi
100bed54:	9f                   	lahf
100bed55:	f6 c4 44             	test   ah,0x44
100bed58:	7a 06                	jp     0x100bed60
100bed5a:	d9 ee                	fldz
100bed5c:	8b e5                	mov    esp,ebp
100bed5e:	5d                   	pop    ebp
100bed5f:	c3                   	ret
100bed60:	83 ec 08             	sub    esp,0x8
100bed63:	f3 0f 11 44 24 04    	movss  DWORD PTR [esp+0x4],xmm0
100bed69:	f3 0f 11 0c 24       	movss  DWORD PTR [esp],xmm1
100bed6e:	e8 ed 85 05 00       	call   0x10117360
100bed73:	83 c4 08             	add    esp,0x8
100bed76:	8b e5                	mov    esp,ebp
100bed78:	5d                   	pop    ebp
100bed79:	c3                   	ret
