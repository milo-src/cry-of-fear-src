
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ad0f0 <.text+0xac0f0>:
100ad0f0:	55                   	push   ebp
100ad0f1:	8b ec                	mov    ebp,esp
100ad0f3:	51                   	push   ecx
100ad0f4:	56                   	push   esi
100ad0f5:	8d 45 fc             	lea    eax,[ebp-0x4]
100ad0f8:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
100ad0ff:	50                   	push   eax
100ad100:	ff 75 0c             	push   DWORD PTR [ebp+0xc]
100ad103:	e8 08 ff ff ff       	call   0x100ad010
100ad108:	8b 4d fc             	mov    ecx,DWORD PTR [ebp-0x4]
100ad10b:	83 c4 08             	add    esp,0x8
100ad10e:	8b f0                	mov    esi,eax
100ad110:	85 c9                	test   ecx,ecx
100ad112:	74 37                	je     0x100ad14b
100ad114:	49                   	dec    ecx
100ad115:	51                   	push   ecx
100ad116:	6a 00                	push   0x0
100ad118:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100ad11e:	f3 0f 10 45 10       	movss  xmm0,DWORD PTR [ebp+0x10]
100ad123:	83 c4 08             	add    esp,0x8
100ad126:	8b 04 86             	mov    eax,DWORD PTR [esi+eax*4]
100ad129:	6a 64                	push   0x64
100ad12b:	6a 00                	push   0x0
100ad12d:	83 ec 08             	sub    esp,0x8
100ad130:	c7 44 24 04 00 00 80 	mov    DWORD PTR [esp+0x4],0x3f800000
100ad137:	3f 
100ad138:	f3 0f 11 04 24       	movss  DWORD PTR [esp],xmm0
100ad13d:	50                   	push   eax
100ad13e:	6a 04                	push   0x4
100ad140:	ff 75 08             	push   DWORD PTR [ebp+0x8]
100ad143:	e8 a8 f8 04 00       	call   0x100fc9f0
100ad148:	83 c4 1c             	add    esp,0x1c
100ad14b:	5e                   	pop    esi
100ad14c:	8b e5                	mov    esp,ebp
100ad14e:	5d                   	pop    ebp
100ad14f:	c3                   	ret
