
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011d410 <.text+0x11c410>:
1011d410:	56                   	push   esi
1011d411:	8b f1                	mov    esi,ecx
1011d413:	57                   	push   edi
1011d414:	6a 05                	push   0x5
1011d416:	6a fb                	push   0xfffffffb
1011d418:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1011d41e:	c7 86 f0 01 00 00 00 	mov    DWORD PTR [esi+0x1f0],0x0
1011d425:	00 00 00 
1011d428:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d42b:	c7 80 bc 00 00 00 00 	mov    DWORD PTR [eax+0xbc],0x0
1011d432:	00 00 00 
1011d435:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1011d43b:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d43e:	c7 80 c0 00 00 00 00 	mov    DWORD PTR [eax+0xc0],0x0
1011d445:	00 00 00 
1011d448:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011d44e:	6a 02                	push   0x2
1011d450:	6a 00                	push   0x0
1011d452:	8d 78 64             	lea    edi,[eax+0x64]
1011d455:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1011d45b:	83 c4 10             	add    esp,0x10
1011d45e:	83 e8 00             	sub    eax,0x0
1011d461:	74 41                	je     0x1011d4a4
1011d463:	83 e8 01             	sub    eax,0x1
1011d466:	74 20                	je     0x1011d488
1011d468:	83 e8 01             	sub    eax,0x1
1011d46b:	75 6a                	jne    0x1011d4d7
1011d46d:	57                   	push   edi
1011d46e:	50                   	push   eax
1011d46f:	83 ec 08             	sub    esp,0x8
1011d472:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011d479:	3f 
1011d47a:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011d481:	68 88 08 1b 10       	push   0x101b0888
1011d486:	eb 36                	jmp    0x1011d4be
1011d488:	57                   	push   edi
1011d489:	6a 00                	push   0x0
1011d48b:	83 ec 08             	sub    esp,0x8
1011d48e:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011d495:	3f 
1011d496:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011d49d:	68 b8 08 1b 10       	push   0x101b08b8
1011d4a2:	eb 1a                	jmp    0x1011d4be
1011d4a4:	57                   	push   edi
1011d4a5:	6a 00                	push   0x0
1011d4a7:	83 ec 08             	sub    esp,0x8
1011d4aa:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
1011d4b1:	3f 
1011d4b2:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
1011d4b9:	68 20 65 1e 10       	push   0x101e6520
1011d4be:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1011d4c4:	6a 00                	push   0x0
1011d4c6:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1011d4c9:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
1011d4cf:	e8 1c f5 fd ff       	call   0x100fc9f0
1011d4d4:	83 c4 1c             	add    esp,0x1c
1011d4d7:	5f                   	pop    edi
1011d4d8:	5e                   	pop    esi
1011d4d9:	c3                   	ret
